import React from 'react'
import './HomeStyle.css'
// import StickyFooter from './footer2'

const Hommee = () => {
  return (
    <div>
        
        <div class="wrapper">
      <div class="box">
        <span style={{'--i': 0}}><h1 style={{textalign: 'center'}}>Fried</h1></span>
        <span style={{'--i': 1}}><h1 style={{textalign: "center"}}>Kentucky</h1></span>
        <span style={{'--i': -1}}><h1 style={{textAlign: 'center'}}>Chicken</h1></span>
        <span style={{'--i': 2}}><h1 style={{textAlign: 'center'}}>KFC </h1></span>
      </div>
    </div>
    {/* <StickyFooter /> */}
    </div>
    
  )
}

export default Hommee