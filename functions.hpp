int total_owed (int st, int end, int bed)
{
    //start from 5-9
    if (st>=5 && st <=bed && end >=5 && end <=bed){
        return (end-st)*12;
    }
    else if (st>=5 && st <=bed && end >=bed && end <=12){
        return (bed-st)*12+(end-bed)*8;
    }
    else if (st>=5 && st <=bed && end >=0 && end <=4){
        return (bed-st)*12+(12-bed)*8+(end)*16;
    }
    //start from bed-12
    else if (st>=bed && st <=12 && end >=bed && end <=12){
        return (end-st)*8;
    }
    else if (st>=bed && st <=12 && end >=0 && end <=4){
        return (12-st)*8+(end)*16;
    }
    //start from 12-4

    else if (st>=0 && st <=4 && end >=0 && end <=4){
        return (end-st)*16;
    }
    else
    {
        return 0;
    }
}
