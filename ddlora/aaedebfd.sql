create table aaedetbf
(
  dadbnumb    varchar2(8) default ' ' not null,
  dadbclno    varchar2(2) default ' ' not null,
  adbline     varchar2(70) default ' ' not null,
  adbspare    varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaedetb1 primary key( 
dadbnumb,
dadbclno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
