const struct AdventureGuideData AdventureGuideInfo[] =
{
    [GUIDE_ADVENTURE_GUIDE] =
    {
        .title = COMPOUND_STRING("Adventure Guide"),
        .isAdvancedGuide = ADVENTURE_GUIDE_BASIC,
        .description =
        {
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. In laoreet ante in risus dictum consectetur. In laoreet ante in risus dictum consectetur. 1"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. In laoreet ante in risus dictum consectetur. In laoreet ante in risus dictum consectetur. 2"),
            COMPOUND_STRING("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean vel odio eleifend nunc auctor vestibulum in eget eros. Maecenas tincidunt dignissim aliquam. Nullam eros est, sollicitudin eu libero sit amet, tincidunt posuere metus. In laoreet ante in risus dictum consectetur. In laoreet ante in risus dictum consectetur. In laoreet ante in risus dictum consectetur. 3"),
        },
    },
    [GUIDE_POKEDEX] =
    {
        .title = COMPOUND_STRING("Pokédex"),
        .isAdvancedGuide = ADVENTURE_GUIDE_ADVANCED,
        .description =
        {
            COMPOUND_STRING("The Pokédex app is the best resource about the Resido's Pokémon. All of the Pokémon with known habitats in Resido are shown, with vital information such as Types, Abilites, Egg Groups, Evolution and Forms Data, Learnable Moves, and Locations."),
            COMPOUND_STRING("When looking for a specific Pokémon to add to your party, the Pokédex's filter functionality allows for advanced searching and filtering to find the right Pokémon to solve any problem."),
        },
    },
    [GUIDE_SURPRISE_TRADE] =
    {
        .title = COMPOUND_STRING("Surprise Trade"),
        .isAdvancedGuide = ADVENTURE_GUIDE_BASIC,
        .description =
        {
            COMPOUND_STRING("With a Surprise Trade, you don’t choose who you’ll trade with or what you’ll get. Just choose a Pokémon you’re willing to part with from your Boxes or Party and your trade will be carried out automatically."),
            COMPOUND_STRING("Trading Pokémon with other Trainers can also help you fill up your Pokédex! With Surprise Trades, you can trade with players from all over Resido!"),
        },
    },
};
