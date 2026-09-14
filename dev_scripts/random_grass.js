function randInt(min, max) {
    min = Math.ceil(min);
    max = Math.floor(max);
    return Math.floor(Math.random() * (max - min)) + min;
}

const grassTiles = [0x009, 0x00A, 0x01F];

export function onBlockChanged(x, y, prevBlock, newBlock) {

    if (grassTiles.indexOf(newBlock.metatileId) != -1) {
        let selectedTile;
        
        if (Math.random() < 0.9) {
            selectedTile = 0x009;
        } else {    
            const i = randInt(0, 2); 
            selectedTile = grassTiles[i + 1]; 
        }
        
        map.setMetatileId(x, y, selectedTile);
    }
}