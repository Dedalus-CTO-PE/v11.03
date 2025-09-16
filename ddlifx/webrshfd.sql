create table webrshaf
(
wbrsfno     char(8),
wbrssta     char(1),
wbrssdt     char(8),
wbrsstm     char(8),
wbrsprg     char(8),
wbrsdes     char(50),
wbrsusr     char(10),
wbrsrdt     char(8),
wbrsrtm     char(8),
wbrsbdt     char(8),
wbrsbtm     char(8),
wbrsbfl     decimal(1,0),
wbrstyp     decimal(1,0),
wbrserc     decimal(6,0),
wbrsprc     decimal(6,0),
wbrsutm     char(8),
wbrsur1     char(30),
wbrsur2     char(30),
wbrsud1     char(8),
wbrsud2     char(8),
wbrsuy1     char(1),
wbrsuy2     char(1),
wbrsspa     char(20),
lf          char(1)
);
create unique index webrsha1 on webrshaf
(
wbrsfno
);
create unique index webrsha2 on webrshaf
(
wbrssta,
wbrssdt,
wbrsstm,
wbrsfno
);
create unique index webrsha3 on webrshaf
(
wbrsusr,
wbrsfno
);
revoke all on webrshaf from public ; 
grant select on webrshaf to public ; 
