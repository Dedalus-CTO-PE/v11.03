create table oprtsmaf
(
  optsunid    varchar2(10) default ' ' not null,
  optstmno    varchar2(1) default ' ' not null,
  doptssin    varchar2(2) default ' ' not null,
  optsscde    varchar2(6) default ' ' not null,
  optssdat    varchar2(8) default ' ' not null,
  optsstim    varchar2(8) default ' ' not null,
  optsedat    varchar2(8) default ' ' not null,
  optsetim    varchar2(8) default ' ' not null,
  optsslev    varchar2(3) default ' ' not null,
  optsstyp    varchar2(3) default ' ' not null,
  optsinst    varchar2(1) default ' ' not null,
  optsuy01    varchar2(1) default ' ' not null,
  optsspar    varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprtsma1 primary key( 
optsunid,
optstmno,
doptssin,
optsscde,
optssdat,
optsstim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
