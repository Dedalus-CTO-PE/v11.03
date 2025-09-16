create table outlpcaf
(
  otlpsche    varchar2(5) default ' ' not null,
  otlpurno    varchar2(8) default ' ' not null,
  otlpbook    varchar2(8) default ' ' not null,
  otlpsite    varchar2(6) default ' ' not null,
  otlpclin    varchar2(6) default ' ' not null,
  otlpsdat    varchar2(8) default ' ' not null,
  otlpstim    varchar2(8) default ' ' not null,
  otlpslot    varchar2(3) default ' ' not null,
  otlpprnt    varchar2(6) default ' ' not null,
  otlpcopy    number(3,0) default 0 not null,
  otlpstat    varchar2(6) default ' ' not null,
  otlplett    varchar2(3) default ' ' not null,
  otlpptyp    varchar2(1) default ' ' not null,
  otlpwebu    varchar2(10) default ' ' not null,
  otlprdat    varchar2(8) default ' ' not null,
  otlprtim    varchar2(8) default ' ' not null,
  otlpsers    varchar2(1) default ' ' not null,
  otlpspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outlpca1 primary key( 
otlpsche)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
