create table respdsaf
(
repdrdt     varchar2(8),
repdrtm     varchar2(5),
repdrun     varchar2(4),
repdlin     varchar2(3),
repdtxt     varchar2(127),
repdptl     varchar2(3),
repdspa     varchar2(20),
lf          varchar2(1),
constraint respdsa1 primary key( 
repdrdt,
repdrtm,
repdrun,
repdlin)
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
create public synonym respdsaf for respdsaf;
create unique index respdsa2 on respdsaf
(
repdrdt,
repdrtm,
repdrun,
repdptl,
repdlin
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
