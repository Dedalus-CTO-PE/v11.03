create table pmscdgaf
(
dpmcgadn    varchar2(8),
dpmcgcnr    varchar2(8),
pmcgprmm    varchar2(9),
dpmcgbsd    varchar2(2),
dpmcgcdi    varchar2(2),
pmcgcdds    varchar2(50),
pmcgspar    varchar2(30),
lf          varchar2(1),
constraint pmscdga1 primary key( 
dpmcgadn,
dpmcgcnr,
pmcgprmm,
dpmcgbsd,
dpmcgcdi)
)
tablespace indx 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace indx 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pmscdgaf for pmscdgaf;
