class clsMusicScore 
  Variable Declarations
 	private string barCode 
	private string nameOfArrangement
	private bool conservatoryApproved
	private num nbrOfPages 

    public void setBarCode (byVal string pBarCode)
        if (pBarCode <> empty)
            this.barCode = pBarCode
        end if 
    return

    public string getBarCode ()
    return (this.barCode)

    public void setNameOfArrangement (byVal string pNameOfArrangement)
        this.nameOfArrangement = pNameOfArrangement
    return

    public string getNameOfArrangement ()
    return (this.nameOfArrangement)

    public void setConservatoryApproved (byVal bool pConservatoryApproved)
        this.conservatoryApproved = pConservatoryApproved
    return

    public bool getConservatoryApproved ()
    return (this.conservatoryApproved)

    public void setNbrOfPages (byVal num pNbrOfPages)
        if (pNbrOfPages > 0)
            this.nbrOfPages = pNbrOfPages
        end if 
    return

    public num getNbrOfPages ()
    return (this.nbrOfPages)

    public num calcBookCost (byVal bool isBoxingDay)
        Variable Declarations
            num baseBookCost = 10
            num boxingDayDiscount = 0.35
            num tax = 0.13
            num preTotal, finalCost, markUp

        if (this.nbrOfPages < 10) 
            markUp = 0.035
        else if (this.nbrOfPages >= 10 and this.nbrOfPages < 50)
            markUp = 0.01
        else 
            markUp = 0
        end if

        preTotal = baseBookCost + (baseBookCost * markUp)

        if (isBoxingDay)
            preTotal = preTotal - (preTotal * boxingDayDiscount)
        end if

        finalCost = preTotal + (preTotal * tax)
    return (finalCost)

    public void generateBookCoverLabel (byVal num finalCost, byRef string line1,
                                        byRef string line2, byRef string line3)
        line1 = this.nameOfArrangement, this.barCode

        if(this.conservatoryApproved)
            line2 = "Approved by the Royal Conservatory of Music"
        else
            line2 = ""
        end if

        line3 = "Cost after tax is $", finalCost 
    return 
end class

main
Variable Declarations
    string barCodeMsg = "Bar code: ", nameOfArrangementMsg = "Name of arrangement: "
    string conservatoryMsg = "Conservatory approved (yes or no) " 
    string nbrOfPagesMsg = "Number of pages: "
	  string quantityMsg = "How many labels would you like? "
    string boxingMsg = "Is it boxing day (yes or no)? "
    string barCodeFromUser, nameOfArrangementFromUser
    string conservatoryApprovedFromUser, boxingDayFromUser 
    string coverLine1, coverLine2, coverLine3
    num quantityFromUser = 0, nbrOfPagesFromUser = 0
    num finalCost = 0, counter = 0 
    bool isConservatoryApproved, isBoxingDay  
 
output barCodeMsg
input barCodeFromUser
output nameOfArrangementMsg
input nameOfArrangementFromUser
output conservatoryMsg
input conservatoryApprovedFromUser
if conservatoryApprovedFromUser = "yes"  
  isConservatoryApproved = true
else 
  isConservatoryApproved = false
end if
output nbrOfPagesMsg
input nbrOfPagesFromUser
output quantityMsg
input quantityFromUser
output boxingMsg
input boxingDayFromUser
if boxingDayFromUser = "yes"  
  isBoxingDay = true
else 
  isBoxingDay = false
end if

clsMusicScore MusicObj
MusicObj.setBarCode(barCodeFromUser)
MusicObj.setNameOfArrangement(nameOfArrangementFromUser)
MusicObj.setConservatoryApproved(conservatoryApprovedFromUser)
MusicObj.setNbrOfPages(nbrOfPagesFromUser)
finalCost = MusicObj.calcBookCost(isBoxingDay)
MusicObj.generateBookCoverLabel(finalCost, coverLine1, coverLine2, coverLine3)

for counter=0 to quantityFromUser step 1
	output coverLine1, coverLine2,
	output coverLine3
end for


Scribe - Matthew Sherwood 
Project manager - Andrew Tse
Verifier - Emanuel Dobra 
Time and Reporter - Tobias Walters 
