create table outadlaf
(
  otalseid    varchar2(4) default ' ' not null,
  otalsedc    varchar2(35) default ' ' not null,
  otalbdfr    varchar2(8) default ' ' not null,
  otalbdto    varchar2(8) default ' ' not null,
  otalbkty    varchar2(1) default ' ' not null,
  otalsifr    varchar2(6) default ' ' not null,
  otalsito    varchar2(6) default ' ' not null,
  otalclfr    varchar2(6) default ' ' not null,
  otalclto    varchar2(6) default ' ' not null,
  otalstfr    varchar2(5) default ' ' not null,
  otalstto    varchar2(5) default ' ' not null,
  otalurfr    varchar2(8) default ' ' not null,
  otalurto    varchar2(8) default ' ' not null,
  otaldpyn    varchar2(1) default ' ' not null,
  otalvtfr    varchar2(3) default ' ' not null,
  otalvtto    varchar2(3) default ' ' not null,
  otalmdfr    varchar2(8) default ' ' not null,
  otalmdto    varchar2(8) default ' ' not null,
  otalctfr    varchar2(6) default ' ' not null,
  otalctto    varchar2(6) default ' ' not null,
  otalocfr    varchar2(3) default ' ' not null,
  otalocto    varchar2(3) default ' ' not null,
  otalltyp    varchar2(3) default ' ' not null,
  otalspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outadla1 primary key( 
otalseid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
