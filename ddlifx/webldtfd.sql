create table webldtaf
(
wbldlkid    char(8),
wbldpage    char(3),
wblduqid    char(3),
wbldcode    char(10),
wblddesc    char(50),
wbldtype    char(1),
wbldlkpg    char(3),
wbldactv    char(1),
wbldspar    char(40),
lf          char(1)
);
create unique index webldta1 on webldtaf
(
wbldlkid,
wbldpage,
wblduqid
);
create unique index webldta2 on webldtaf
(
wbldlkid,
wbldpage,
wblddesc,
wblduqid
);
create unique index webldta3 on webldtaf
(
wbldlkid,
wbldpage,
wbldcode,
wblduqid
);
revoke all on webldtaf from public ; 
grant select on webldtaf to public ; 
