class car:
    
    def __init__(self,model,topspeed):
        self.model = model
        self.topspeed = topspeed
        
    def info(self):
        print(self.model,' and ',self.topspeed)
        
m = car('audi i8','230kmph')
m.info()

