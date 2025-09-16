create table privafdf
(
prvainvn    varchar2(8),
dprvaunq    varchar2(8),
prvaclam    varchar2(20),
prvaspar    varchar2(40),
lf          varchar2(1),
constraint privafd1 primary key( 
prvainvn,
dprvaunq)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym privafdf for privafdf;
create unique index privafd2 on privafdf
(
dprvaunq,
prvainvn
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
