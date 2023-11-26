import React from 'react'
import kfcLogo from './kfcProducts/loggo3.jpeg'
import { Button, Typography } from '@mui/material';
import NextSlider from './slider';

 function Llogo() {
  return (
    <div>
        <div id='logo'>
            <img src={kfcLogo} style={{width: 500, border: 5, borderRadius: 20}} />
            <Typography variant='h2' style={{marginTop: 150, color: "orange"}}>For All Your Yummies Cravings...</Typography>
            <Typography variant='h4' style={{textAlign: "center", marginTop: 50}}>From local fare to restaurant favourites, our wide selection of your favourite dishes will definetely satisfy all your cravings.</Typography>
            <NextSlider />
            < Button variant='contained' style={{backgroundColor: "red", width: "100%", fontSize: 20, padding: 10, marginTop: 160}}>Next</Button>

        </div>
    </div>
  )
}
export default Llogo;

