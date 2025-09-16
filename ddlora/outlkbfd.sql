create table outlkbaf
(
  otlkurno    varchar2(8) default ' ' not null,
  otlkobok    varchar2(8) default ' ' not null,
  otlklbok    varchar2(8) default ' ' not null,
  otlkbsta    varchar2(1) default ' ' not null,
  otlkssta    varchar2(1) default ' ' not null,
  otlkldat    varchar2(8) default ' ' not null,
  otlkltim    varchar2(8) default ' ' not null,
  otlkluid    varchar2(10) default ' ' not null,
  otlkudat    varchar2(8) default ' ' not null,
  otlkutim    varchar2(8) default ' ' not null,
  otlkuuid    varchar2(10) default ' ' not null,
  otlkspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outlkba1 primary key( 
otlkurno,
otlkobok,
otlklbok)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outlkba2 on outlkbaf
(
otlkurno,
otlklbok,
otlkobok
)
  tablespace pas_indx; 
