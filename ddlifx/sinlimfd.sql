create table sinlimaf
(
silicst     char(5),
silisup     char(5),
silicat     char(7),
siliqty     decimal(6,0),
silisut     char(15),
silisub     char(5),
silipd      char(30),
silipn      char(30),
silicon     char(10),
silicdt     char(8),
siliedt     char(8),
siliect     decimal(16,4),
silispa     char(20),
lf          char(1)
);
create unique index sinlima1 on sinlimaf
(
silicst,
silisup,
silicat
);
revoke all on sinlimaf from public ; 
grant select on sinlimaf to public ; 
