create table patsrbaf
(
ptsbcode    varchar2(3),
ptsbfund    varchar2(6),
ptsbtblt    varchar2(3),
ptsbcscd    varchar2(9),
ptsbbrcd    varchar2(3),
ptsbamnt    number(14,2),
ptsbcnid    varchar2(6),
ptsbspar    varchar2(24),
lf          varchar2(1),
constraint patsrba1 primary key( 
ptsbcnid,
ptsbcode,
ptsbfund,
ptsbtblt,
ptsbcscd,
ptsbbrcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym patsrbaf for patsrbaf;
