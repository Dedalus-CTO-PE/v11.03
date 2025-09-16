create table outbudaf
(
  dotbuadm    varchar2(8) default ' ' not null,
  otbudate    varchar2(8) default ' ' not null,
  otbutime    varchar2(8) default ' ' not null,
  otbuoper    varchar2(4) default ' ' not null,
  otbuport    varchar2(2) default ' ' not null,
  otbusite    varchar2(6) default ' ' not null,
  otbuspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outbuda1 primary key( 
dotbuadm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outbuda2 on outbudaf
(
otbudate,
dotbuadm
)
  tablespace pas_indx; 
