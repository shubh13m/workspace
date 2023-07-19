const express = require('express');
const cors = require('cors');
const app = express();

app.use(cors());
app.get('/list-files', (req, res) => {
    const fs = require('fs');
    const path = require('path');
    const directoryPath = path.join(__dirname, '.');
    fs.readdir(directoryPath, function(err, files) {
        if (err) {
            return console.log('Unable to scan directory: ' + err);
        }
        const textFiles = files.filter(file => file.endsWith('.txt'));
        res.send(textFiles);

    })
})

app.listen(3000, () => {
    console.log('Server started on port 3000');
})