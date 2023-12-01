import * as React from 'react';
import Card from '@mui/material/Card';
import CardActions from '@mui/material/CardActions';
import CardContent from '@mui/material/CardContent';
import CardMedia from '@mui/material/CardMedia';
import Button from '@mui/material/Button';
import Typography from '@mui/material/Typography';

export default function R2() {
  return (
    <div id='restaurants'>
          <Card sx={{ maxWidth: 345 }}>
      <CardMedia
        component="img"
        alt="green iguana"
        height="140"
        image="https://th.bing.com/th/id/R.4096c6ce2a0f95ce50614255888d6ae1?rik=1qthSU3VOrZGJw&riu=http%3a%2f%2ft.b5z.net%2fi%2fu%2f2001091%2fi%2fkfcug.jpg&ehk=hzBdu8qS2IpogVlGcmrcQPcLumBlPswF7iAPRdVnNIs%3d&risl=&pid=ImgRaw&r=0"
      />
      <CardContent>
        <Typography gutterBottom variant="h5" component="div">
          KFC Nakumatt
        </Typography>
        <Typography variant="body2" color="text.secondary">
          Lizards are a widespread group of squamate reptiles, with over 6,000
          species, ranging across all continents except Antarctica
        </Typography>
      </CardContent>
      <CardActions>
        <Button size="small">Share</Button>
        <Button size="small">View</Button>
      </CardActions>
    </Card>
    </div>
  );
}