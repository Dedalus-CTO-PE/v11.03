create table patuclaf
(
ptucuser    char(4),
ptuccons    char(6),
ptucpriv    char(50),
ptucindp    char(50),
ptucspar    char(39),
lf          char(1)
);
create unique index patucla1 on patuclaf
(
ptucuser,
ptuccons
);
create unique index patucla2 on patuclaf
(
ptuccons,
ptucuser
);
revoke all on patuclaf from public ; 
grant select on patuclaf to public ; 
