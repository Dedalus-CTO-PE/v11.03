create table patc2saf
(
  ptc2date    varchar2(6) default ' ' not null,
  ptc2clss    varchar2(3) default ' ' not null,
  ptc2doct    varchar2(6) default ' ' not null,
  ptc2emrg    number(5,0) default 0 not null,
  ptc2elct    number(5,0) default 0 not null,
  ptc2dsch    number(5,0) default 0 not null,
  ptc2dead    number(5,0) default 0 not null,
  ptc2stdp    number(5,0) default 0 not null,
  ptc2prvp    number(5,0) default 0 not null,
  ptc2stdb    number(5,0) default 0 not null,
  ptc2prvb    number(5,0) default 0 not null,
  ptc2rng1    number(5,0) default 0 not null,
  ptc2rng2    number(5,0) default 0 not null,
  ptc2rng3    number(5,0) default 0 not null,
  ptc2rng4    number(5,0) default 0 not null,
  ptc2spar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patc2sa1 primary key( 
ptc2date,
ptc2clss,
ptc2doct)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
