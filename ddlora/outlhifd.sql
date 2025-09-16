create table outlhiaf
(
  otlhurno    varchar2(8) default ' ' not null,
  otlhdate    varchar2(8) default ' ' not null,
  dotlhlnu    varchar2(3) default ' ' not null,
  dotlhout    varchar2(8) default ' ' not null,
  otlhsite    varchar2(6) default ' ' not null,
  otlhclin    varchar2(6) default ' ' not null,
  otlhcdat    varchar2(8) default ' ' not null,
  otlhctim    varchar2(5) default ' ' not null,
  otlhslot    number(3,0) default 0 not null,
  otlhpuid    varchar2(10) default ' ' not null,
  otlhspar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outlhia1 primary key( 
otlhurno,
otlhdate,
dotlhlnu,
dotlhout)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
