from abc import ABC , abstractmethod
from datetime import datetime

class User(ABC):
    def __init__(self, name , email, age , nid) -> None:
        self.name=name
        self.email=email
        self.age =age 
        self.__nid = nid
        self.wallet= 0
        self.__id=0
        
    @abstractmethod
    def display_profile(self):
        raise NotImplementedError
    
class Rider(User):
    def __init__(self, name, email, age, nid,current_location) -> None:
        self.current_ride = None
        super().__init__(name, email, age, nid)
        self.wallet=0
        self.current_location= current_location
        
    def load_cash(self,amount):
        if amount>= 0:
            self.wallet+=amount
    def update_location(self,current_location):
        self.current_location=current_location
            
    def display_profile(self):
        print(f'Rider : with name : {self.name} age : {self.age} and email : {self.email}' )
    def request_ride(self, location, destination):
        if not self.current_ride:
            ride_request= None # TODO : set the ride properly
            self.current_ride= None # TODO : set current ride via ride match
            
class Driver (User):
    def __init__(self, name, email, age, nid, current_location) -> None:
        super().__init__(name, email, age, nid)
        self.current_location= current_location
        self.wallet=0
    def display_profile(self):
        print(f'Rider : with name : {self.name} age : {self.age} and email : {self.email}' )
    def accept_ride(self, ride):
        ride.set_driver(self)

class Ride :
    def __init__(self,start_location, end_location) -> None:
        self.start_location= start_location
        self.end_location= end_location
        self.driver= None
        self.rider=None
        self.start_time=None
        self.end_time=None
        self.estimated_fare=None
        
    def set_time(self,driver):
        self.driver=driver
    
    def start_ride(self):
        self.set_time=datetime.now()
        
    def end_time(self,amount):
        self.end_time =datetime.now()
        self.rider.wallet -= self.estimated_fare
        self.driver.wallet += self.estimated_fare
        
        
class Ride_Request:
    def __init__(self,end_location) -> None:
        self.rider=Rider
        self.end_location = end_location
        
class Ride_Matching :
    def __init__(self) -> None:
        self.available_drivers=[]
    
    def find_driver(self,ride_request):
        if len(self.available_drivers)>0:
            # TODO find the closest driver Of the rider
            driver= self.available_drivers[0]
            ride=Ride(ride_request.rider.current_location,ride_request.end_location)
            driver.accept_ride(ride)