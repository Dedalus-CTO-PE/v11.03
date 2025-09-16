create table hl7inbaf
(
  dh7inmes    varchar2(20) default ' ' not null,
  h7instat    varchar2(1) default ' ' not null,
  h7indttm    varchar2(16) default ' ' not null,
  h7inmetp    varchar2(3) default ' ' not null,
  h7inoper    varchar2(4) default ' ' not null,
  h7inport    varchar2(2) default ' ' not null,
  h7inpgid    varchar2(8) default ' ' not null,
  h7inddat    varchar2(16) default ' ' not null,
  h7inspar    varchar2(34) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7inb01 primary key( 
dh7inmes)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hl7inb02 on hl7inbaf
(
h7instat,
h7indttm,
dh7inmes
)
  tablespace pas_indx; 
create unique index hl7inb03 on hl7inbaf
(
h7instat,
h7inddat,
dh7inmes
)
  tablespace pas_indx; 
create unique index hl7inb04 on hl7inbaf
(
h7inmetp,
h7instat,
h7indttm,
dh7inmes
)
  tablespace pas_indx; 
