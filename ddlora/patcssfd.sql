create table patcssad
(
  ptcsdate    varchar2(6) default ' ' not null,
  ptcstypc    varchar2(1) default ' ' not null,
  ptcstypp    varchar2(1) default ' ' not null,
  ptcsstrt    number(8,0) default 0 not null,
  ptcsadmt    number(8,0) default 0 not null,
  ptcsdsch    number(8,0) default 0 not null,
  ptcsdied    number(8,0) default 0 not null,
  ptcsend     number(8,0) default 0 not null,
  ptcsbday    number(8,0) default 0 not null,
  ptcsdycs    number(8,0) default 0 not null,
  ptcsdbdy    number(8,0) default 0 not null,
  ptcsrng1    number(8,0) default 0 not null,
  ptcsrng2    number(8,0) default 0 not null,
  ptcsrng3    number(8,0) default 0 not null,
  ptcsrng4    number(8,0) default 0 not null,
  ptcswait    number(8,0) default 0 not null,
  ptcsspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcssa1 primary key( 
ptcsdate,
ptcstypc,
ptcstypp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
