create table ibaprtaf
(
  qprtcode    varchar2(6) default ' ' not null,
  prtdesc     varchar2(20) default ' ' not null,
  prtaval     number(1,0) default 0 not null,
  prttype     number(2,0) default 0 not null,
  prtpaper    number(2,0) default 0 not null,
  ibpthosp    varchar2(3) default ' ' not null,
  ibptquen    varchar2(50) default ' ' not null,
  ibptlocn    varchar2(80) default ' ' not null,
  ibptscrp    varchar2(80) default ' ' not null,
  prtspare    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibaprta1 primary key( 
qprtcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibaprta2 on ibaprtaf
(
ibpthosp,
qprtcode
)
  tablespace pas_indx; 
