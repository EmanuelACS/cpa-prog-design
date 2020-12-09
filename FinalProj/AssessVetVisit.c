class clsVetVisit
    Variable Declarations
        private date appDateAndTime
        private string purposeOfVisit
        private bool hiddenHumanAgenda
        private bool nutGatheringSeason

    public void determineCourseOfAction()
        Variable Declarations
            string userMsg = "Pupper's choice."   
            clsDriveCar carObj
            num driveHomeTime, driveTrailTime
        driveHomeTime = carObj.determineTimeToReachAddress("home")
        driveTrailTime = carObj.determineTimeToReachAddress("trail")
        if (this.purposeOfVisit = "spay/neuter")
            if (driveTrailTime < 15)
                carObj.driveToTrails()
                userMsg = "Heading to the trails. Be on the lookout for porcupines."
            else if (driveHomeTime < 20)
                carObj.driveHome()
                userMsg = "Heading home. Chill on couch time."
            end if 
        else if (this.purposeOfVisit = "pet fun day")
            if (this.hiddenHumanAgenda = false and this.nutGatheringSeason = false)
                userMsg = "Stay. Eat, play, shed."
            end if
        end if 
        output userMsg
    return  
end class

Variable Declarations
    string welcome = 
      "So, you have a vet appt. No worries, I have your back.
       Virtual assistants. 
       We get the job done."
    string datePrompt = "Date and time? "
    string purposePrompt = "Purpose of visit? "
    string hiddenPrompt = "Does your human have a hidden agenda? "
    string nutPrompt = "Is it nut gathering season for chipmunks? "
    date apptDateAndTime
    string purpose
    bool hasAgenda
    bool nutSeason

output welcome
output datePrompt
input apptDateAndTime
output purposePrompt
input purpose 
output hiddenPrompt
input hasAgenda
output nutPrompt
input nutSeason

clsVetVisit dogVisit
dogVisit.setAppDateAndTime(apptDateAndTime)
dogVisit.setPurposeOfVisit(purpose)
dogVisit.setHiddenHumanAgenda(hasAgenda)
dogVisit.setNutGatheringSeason(nutSeason)
dogVisit.determineCourseOfAction()



 
 