create table watchaaf
(
  wtchurno    varchar2(8) default ' ' not null,
  wtchproc    varchar2(9) default ' ' not null,
  wtchpcnt    varchar2(2) default ' ' not null,
  wtchdate    varchar2(8) default ' ' not null,
  wtchtime    varchar2(8) default ' ' not null,
  wtchusid    varchar2(10) default ' ' not null,
  wtchupty    varchar2(2) default ' ' not null,
  wtchreas    varchar2(3) default ' ' not null,
  wtchoval    varchar2(80) default ' ' not null,
  wtchcval    varchar2(80) default ' ' not null,
  wtchspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint watchaa1 primary key( 
wtchurno,
wtchproc,
wtchpcnt,
wtchdate,
wtchtime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index watchaa2 on watchaaf
(
wtchdate,
wtchtime,
wtchupty,
wtchurno,
wtchproc,
wtchpcnt
)
  tablespace pas_indx; 
