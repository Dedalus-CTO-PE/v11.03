create table watesnaf
(
wtenuniq    char(9),
wtenedat    char(8),
wtenetyp    char(1),
wtenevdt    char(8),
wteneval    char(70),
wtenwebc    char(10),
wtencdat    char(8),
wtenctim    char(8),
wtenwebu    char(10),
wtenudat    char(8),
wtenutim    char(8),
wtensadi    char(10),
wtenmanu    char(1),
wtenspar    char(39),
lf          char(1)
);
create unique index watesna1 on watesnaf
(
wtenuniq,
wtenetyp,
wtenevdt,
wtenedat,
wtensadi
);
create unique index watesna2 on watesnaf
(
wtenuniq,
wtenedat,
wtenetyp,
wtenevdt,
wtensadi
);
create unique index watesna3 on watesnaf
(
wtenedat,
wtenuniq,
wtenetyp,
wtenevdt,
wtensadi
);
create unique index watesna4 on watesnaf
(
wtenuniq,
wtenedat,
wtenevdt,
wtensadi,
wtenetyp
);
create unique index watesna5 on watesnaf
(
wtenuniq,
wtenetyp,
wtensadi,
wtenevdt,
wtenedat
);
revoke all on watesnaf from public ; 
grant select on watesnaf to public ; 
