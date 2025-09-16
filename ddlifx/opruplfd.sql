create table opruplaf
(
opupdate    char(8),
opuptime    char(8),
opuppath    char(40),
opupfile    char(15),
opupmanf    char(40),
opuptype    decimal(1,0),
opupspar    char(28),
lf          char(1)
);
create unique index oprupla1 on opruplaf
(
opupdate,
opuptime,
opuppath,
opupfile
);
create unique index oprupla2 on opruplaf
(
opuppath,
opupfile,
opupdate,
opuptime
);
create unique index oprupla3 on opruplaf
(
opupmanf,
opupdate,
opuptime
);
revoke all on opruplaf from public ; 
grant select on opruplaf to public ; 
