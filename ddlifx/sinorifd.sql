create table sinaudor
(
sioraudd    char(8),
sioraudt    char(8),
sioraudp    char(2),
sioraudr    char(1),
siorauds    decimal(1,0),
sioraudo    char(4),
siororig    char(3),
siorname    char(20),
siorhosp    char(20),
siordel     decimal(1,0),
siormess    char(3),
siorext     char(10),
siorcon     char(3),
siorur1     char(15),
siorur2     char(15),
siorud1     char(8),
siorud2     char(8),
sioruc1     char(3),
sioruc2     char(3),
sioruy1     char(1),
sioruy2     char(1),
siorspa     char(18),
lf          char(1)
);
create index sinaudor on sinaudor
(
sioraudd,
sioraudt,
sioraudp,
sioraudr
);
revoke all on sinaudor from public ; 
grant select on sinaudor to public ; 
create table sinoriaf
(
siororig    char(3),
siorname    char(20),
siorhosp    char(20),
siordel     decimal(1,0),
siormess    char(3),
siorext     char(10),
siorcon     char(3),
siorur1     char(15),
siorur2     char(15),
siorud1     char(8),
siorud2     char(8),
sioruc1     char(3),
sioruc2     char(3),
sioruy1     char(1),
sioruy2     char(1),
siorspa     char(18),
lf          char(1)
);
create unique index sinoria1 on sinoriaf
(
siororig
);
revoke all on sinoriaf from public ; 
grant select on sinoriaf to public ; 
