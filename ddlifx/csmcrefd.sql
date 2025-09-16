create table csmaudcr
(
cscraudd    char(8),
cscraudt    char(8),
cscraudp    char(2),
cscraudr    char(1),
cscrauds    decimal(1,0),
cscraudo    char(4),
cscrcrd     char(5),
cscrtyp     char(3),
cscrsky     char(6),
cscrcn1     char(30),
cscrcn2     char(30),
cscrca1     char(25),
cscrca2     char(25),
cscrca3     char(25),
cscrcpc     char(6),
cscrctel    char(15),
cscrcfax    char(15),
cscrcon     char(30),
cscrhor     decimal(1,0),
cscrhin     decimal(1,0),
cscrhcr     decimal(1,0),
cscrhpy     decimal(1,0),
cscrur1     char(25),
cscrur2     char(25),
cscrud1     char(8),
cscrud2     char(8),
cscruy1     char(1),
cscruy2     char(1),
cscrspa     char(20),
lf          char(1)
);
create index csmaudcr on csmaudcr
(
cscraudd,
cscraudt,
cscraudp,
cscraudr
);
revoke all on csmaudcr from public ; 
grant select on csmaudcr to public ; 
create table csmcreaf
(
cscrcrd     char(5),
cscrtyp     char(3),
cscrsky     char(6),
cscrcn1     char(30),
cscrcn2     char(30),
cscrca1     char(25),
cscrca2     char(25),
cscrca3     char(25),
cscrcpc     char(6),
cscrctel    char(15),
cscrcfax    char(15),
cscrcon     char(30),
cscrhor     decimal(1,0),
cscrhin     decimal(1,0),
cscrhcr     decimal(1,0),
cscrhpy     decimal(1,0),
cscrur1     char(25),
cscrur2     char(25),
cscrud1     char(8),
cscrud2     char(8),
cscruy1     char(1),
cscruy2     char(1),
cscrspa     char(20),
lf          char(1)
);
create unique index csmcrea1 on csmcreaf
(
cscrcrd
);
revoke all on csmcreaf from public ; 
grant select on csmcreaf to public ; 
