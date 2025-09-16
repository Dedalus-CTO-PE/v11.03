create table patrgmaf
(
ptrgadmn    varchar2(8),
ptrgregm    varchar2(10),
ptrgcntr    varchar2(2),
ptrgcuid    varchar2(10),
ptrgcdat    varchar2(10),
ptrgctim    varchar2(8),
ptrgspar    varchar2(50),
lf          varchar2(1),
constraint patrgma1 primary key( 
ptrgadmn,
ptrgcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym patrgmaf for patrgmaf;
create unique index patrgma2 on patrgmaf
(
ptrgadmn,
ptrgregm,
ptrgcntr
)
  tablespace pas_indx; 
