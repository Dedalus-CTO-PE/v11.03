create table sincodaf
(
sicdcata    char(3),
sicdcode    char(3),
sicddesc    char(30),
sicdothr    char(10),
sicdcanc    char(1),
sicdfill    char(2),
lf          char(1)
);
create unique index sincoda1 on sincodaf
(
sicdcata,
sicdcode
);
create unique index sincoda2 on sincodaf
(
sicdcode,
sicdcata
);
revoke all on sincodaf from public ; 
grant select on sincodaf to public ; 
