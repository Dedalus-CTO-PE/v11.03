create table pmsrdiaf
(
  pmricntr    varchar2(6) default ' ' not null,
  pmrictyp    varchar2(2) default ' ' not null,
  pmristyp    varchar2(1) default ' ' not null,
  pmriicdc    varchar2(20) default ' ' not null,
  pmricdat    varchar2(8) default ' ' not null,
  pmrictim    varchar2(8) default ' ' not null,
  pmricuid    varchar2(10) default ' ' not null,
  pmriudat    varchar2(8) default ' ' not null,
  pmriutim    varchar2(8) default ' ' not null,
  pmriuuid    varchar2(10) default ' ' not null,
  pmrispar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsrdia1 primary key( 
pmricntr,
pmrictyp,
pmristyp,
pmriicdc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsrdia2 on pmsrdiaf
(
pmrictyp,
pmristyp,
pmriicdc,
pmricntr
)
  tablespace pas_indx; 
create unique index pmsrdia3 on pmsrdiaf
(
pmristyp,
pmriicdc,
pmricntr,
pmrictyp
)
  tablespace pas_indx; 
create unique index pmsrdia4 on pmsrdiaf
(
pmricntr,
pmristyp,
pmriicdc,
pmrictyp
)
  tablespace pas_indx; 
