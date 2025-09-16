create table hl7reraf
(
  dh7rrmes    varchar2(20) default ' ' not null,
  dh7rrcnt    varchar2(3) default ' ' not null,
  h7rrdesc    varchar2(70) default ' ' not null,
  h7rrcode    varchar2(3) default ' ' not null,
  h7rrspar    varchar2(23) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7rera1 primary key( 
dh7rrmes,
dh7rrcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
