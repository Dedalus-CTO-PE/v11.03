create table hl7evnaf
(
  devnin01    varchar2(20) default ' ' not null,
  devnin02    varchar2(2) default ' ' not null,
  evn001      varchar2(3) default ' ' not null,
  evn002      varchar2(26) default ' ' not null,
  evn003      varchar2(26) default ' ' not null,
  evn004      varchar2(3) default ' ' not null,
  evn005      varchar2(60) default ' ' not null,
  evn006      varchar2(26) default ' ' not null,
  evn007      varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7evn01 primary key( 
devnin01,
devnin02)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
