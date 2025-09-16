create table pmsecoaf
(
pmeohfnd    varchar2(6),
pmeodflg    varchar2(1),
pmeotrid    varchar2(24),
pmeoinvn    varchar2(8),
pmeobatn    varchar2(8),
pmeoctyp    varchar2(1),
pmeocdat    varchar2(8),
pmeouser    varchar2(10),
pmeospar    varchar2(20),
lf          varchar2(1),
constraint pmsecoa1 primary key( 
pmeohfnd,
pmeodflg,
pmeotrid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsecoaf for pmsecoaf;
create unique index pmsecoa2 on pmsecoaf
(
pmeocdat,
pmeodflg,
pmeotrid,
pmeohfnd
)
  tablespace pas_indx; 
