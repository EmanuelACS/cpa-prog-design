clsSong
    Variable Declarations
        private string songName
        private date releaseDate

    public void setSongName(byval string pSongName)
        if (pSongName <> empty)
            this.songName = pSongName
        end if 
    return

    public string getSongName()
    return (this.songName)

    public void makeStrings(byref string pNameLine, byref date pDateLine)
        pNameLine = "The song name is ", this.songName
        pDateLine = "The song was released ", this.releaseDate
    return 
end class