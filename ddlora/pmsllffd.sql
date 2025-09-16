create table pmsllfaf
(
pmllseid    varchar2(4),
pmllvisn    varchar2(8),
pmllosmt    number(9,2),
pmllstat    varchar2(1),
pmllspar    varchar2(12),
lf          varchar2(1),
constraint pmsllfa1 primary key( 
pmllseid,
pmllvisn)
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
create public synonym pmsllfaf for pmsllfaf;
