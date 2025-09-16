create table pmsocmaf
(
pmocvisn    varchar2(8),
pmococnt    varchar2(3),
pmoclcnt    varchar2(3),
pmocline    varchar2(100),
pmocspar    varchar2(30),
lf          varchar2(1),
constraint pmsocma1 primary key( 
pmocvisn,
pmococnt,
pmoclcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsocmaf for pmsocmaf;
