create table patirnge
(
  irange      varchar2(3) default ' ' not null,
  irdesc      varchar2(40) default ' ' not null,
  irnext      number(8,0) default 0 not null,
  irmaxi      number(8,0) default 0 not null,
  irspar      varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patirng1 primary key( 
irange)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
