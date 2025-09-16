create table legwmabf
(
  dlmadmno    char(8) default ' ' not null,
  lmrefno     char(20) default ' ' not null,
  lmpolic     char(20) default ' ' not null,
  lmacdat     char(8) default ' ' not null,
  lmsname     char(30) default ' ' not null,
  lmstele     char(12) default ' ' not null,
  lmcrego     char(36) default ' ' not null,
  lmacloc     char(40) default ' ' not null,
  lptarole    char(3) default ' ' not null,
  lengaged    char(20) default ' ' not null,
  lpinjure    char(30) default ' ' not null,
  lmdtrans    char(10) default ' ' not null,
  lmechsev    char(30) default ' ' not null,
  lregnsev    char(20) default ' ' not null,
  lothdet1    char(30) default ' ' not null,
  lothdet2    char(30) default ' ' not null,
  lothdet3    char(30) default ' ' not null,
  ltwmtist    char(5) default ' ' not null,
  lmspare     char(22) default ' ' not null,
  lf          char(1)
);
create unique index legwmab1 on legwmabf
(
dlmadmno
);
revoke all on legwmabf from public ; 
grant select on legwmabf to public ; 
