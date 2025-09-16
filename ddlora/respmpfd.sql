create table respmpaf
(
repmlab     varchar2(3),
repmlwd     varchar2(32),
repmhwd     varchar2(3),
repmspa     varchar2(30),
lf          varchar2(1),
constraint respmpa1 primary key( 
repmlab,
repmlwd)
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
create public synonym respmpaf for respmpaf;
