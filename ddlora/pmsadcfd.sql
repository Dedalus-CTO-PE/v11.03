create table pmsadcaf
(
pmaccode    varchar2(6),
pmacdesc    varchar2(30),
pmacachs    varchar2(1),
pmacdeci    varchar2(1),
pmacinfc    varchar2(3),
pmacshrd    varchar2(100),
pmacvld1    varchar2(1),
pmacvld2    varchar2(1),
pmacvld3    varchar2(1),
pmacvld4    varchar2(1),
pmacvld5    varchar2(1),
pmacvld6    varchar2(1),
pmacvld7    varchar2(1),
pmacvld8    varchar2(1),
pmacvld9    varchar2(1),
pmacvl10    varchar2(1),
pmacvlna    varchar2(1),
pmacinac    varchar2(1),
pmacwebc    varchar2(10),
pmacdatc    varchar2(8),
pmactimc    varchar2(8),
pmacwebu    varchar2(10),
pmacdatu    varchar2(8),
pmactimu    varchar2(8),
pmacspar    varchar2(50),
lf          varchar2(1),
constraint pmsadca1 primary key( 
pmaccode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsadcaf for pmsadcaf;
create unique index pmsadca2 on pmsadcaf
(
pmacdesc,
pmaccode
)
  tablespace pas_indx; 
