create table fmshclaf
(
  fmhlinst    varchar2(3) default ' ' not null,
  fmhldesc    varchar2(35) default ' ' not null,
  fmhlpile    varchar2(2) default ' ' not null,
  fmhlpis1    varchar2(12) default ' ' not null,
  fmhlpis2    varchar2(12) default ' ' not null,
  fmhlpis3    varchar2(12) default ' ' not null,
  fmhlpis4    varchar2(12) default ' ' not null,
  fmhlpis5    varchar2(12) default ' ' not null,
  fmhlpic1    varchar2(12) default ' ' not null,
  fmhlpic2    varchar2(12) default ' ' not null,
  fmhlpib1    varchar2(4) default ' ' not null,
  fmhlpib2    varchar2(4) default ' ' not null,
  fmhlpirs    varchar2(4) default ' ' not null,
  fmhlpids    varchar2(5) default ' ' not null,
  fmhlpip1    varchar2(3) default ' ' not null,
  fmhlpip2    varchar2(3) default ' ' not null,
  fmhlpitd    varchar2(35) default ' ' not null,
  fmhlspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmshcla1 primary key( 
fmhlinst)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
