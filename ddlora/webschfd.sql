create table webschaf
(
  wbscschd    varchar2(8) default ' ' not null,
  wbscstat    varchar2(1) default ' ' not null,
  wbscscdt    varchar2(8) default ' ' not null,
  wbscsctm    varchar2(8) default ' ' not null,
  wbscactv    varchar2(9) default ' ' not null,
  wbscunix    varchar2(50) default ' ' not null,
  wbscdsrp    varchar2(50) default ' ' not null,
  wbscrpid    varchar2(8) default ' ' not null,
  wbscuser    varchar2(10) default ' ' not null,
  wbscrdte    varchar2(8) default ' ' not null,
  wbscrtim    varchar2(8) default ' ' not null,
  wbscsdat    varchar2(8) default ' ' not null,
  wbscstim    varchar2(8) default ' ' not null,
  wbscsflg    number(1,0) default 0 not null,
  wbscotyp    number(1,0) default 0 not null,
  wbscnrec    number(6,0) default 0 not null,
  wbscrpro    number(6,0) default 0 not null,
  wbscutim    varchar2(8) default ' ' not null,
  wbscprin    varchar2(6) default ' ' not null,
  wbscspoo    varchar2(50) default ' ' not null,
  wbscncop    number(3,0) default 0 not null,
  wbscprep    varchar2(1) default ' ' not null,
  wbscrdat    varchar2(12) default ' ' not null,
  wbscrend    varchar2(8) default ' ' not null,
  wbscperm    varchar2(1) default ' ' not null,
  wbscexcp    varchar2(8) default ' ' not null,
  wbschosp    varchar2(3) default ' ' not null,
  wbscsite    varchar2(6) default ' ' not null,
  wbsccdat    varchar2(8) default ' ' not null,
  wbscctim    varchar2(8) default ' ' not null,
  wbscspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webscha1 primary key( 
wbscschd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webscha2 on webschaf
(
wbscstat,
wbscscdt,
wbscsctm,
wbscschd
)
  tablespace pas_indx; 
create unique index webscha3 on webschaf
(
wbscuser,
wbscscdt,
wbscschd
)
  tablespace pas_indx; 
create unique index webscha4 on webschaf
(
wbscscdt,
wbscschd
)
  tablespace pas_indx; 
create unique index webscha5 on webschaf
(
wbscrpid,
wbscscdt,
wbscuser,
wbscschd
)
  tablespace pas_indx; 
