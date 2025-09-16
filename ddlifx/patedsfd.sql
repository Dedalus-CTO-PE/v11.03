create table patedsaf
(
dptesflg    char(2),
pteshfnd    char(6),
ptesadmn    char(8),
ptesinvn    char(8),
ptesbatn    char(8),
ptesurno    char(8),
ptespbat    char(8),
ptesnbat    char(8),
ptespcsn    char(5),
ptescsno    char(5),
ptesccfl    char(1),
ptesspar    char(12),
lf          char(1)
);
create unique index patedsa1 on patedsaf
(
dptesflg,
pteshfnd,
ptesadmn,
ptesinvn,
ptesbatn
);
create unique index patedsa2 on patedsaf
(
ptesinvn,
ptesbatn
);
create unique index patedsa3 on patedsaf
(
ptesbatn,
ptesadmn,
ptesinvn
);
create unique index patedsa4 on patedsaf
(
ptesadmn,
ptesinvn,
ptesbatn
);
create unique index patedsa5 on patedsaf
(
ptesurno,
ptesadmn,
ptesinvn,
ptesbatn
);
revoke all on patedsaf from public ; 
grant select on patedsaf to public ; 
