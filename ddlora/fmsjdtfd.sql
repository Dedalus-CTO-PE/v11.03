create table fmsjdtaf
(
  fmjdjty     varchar2(1) default ' ' not null,
  fmjdjid     varchar2(6) default ' ' not null,
  fmjdlno     varchar2(3) default ' ' not null,
  fmjddrcr    varchar2(1) default ' ' not null,
  fmjddesc    varchar2(35) default ' ' not null,
  fmjdacc     varchar2(12) default ' ' not null,
  fmjddis     varchar2(5) default ' ' not null,
  fmjdres     varchar2(4) default ' ' not null,
  fmjdtamt    number(14,2) default 0 not null,
  fmjdperc    number(6,2) default 0 not null,
  fmjdpamt    number(14,2) default 0 not null,
  fmjdbasc    varchar2(3) default ' ' not null,
  fmjdspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsjdta1 primary key( 
fmjdjty,
fmjdjid,
fmjdlno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
