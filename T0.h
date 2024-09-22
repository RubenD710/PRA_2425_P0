class BrazoRobotico {
   private: 
      double x;
      double y;
      double z;
      bool sujetando;
   public:
      BrazoRobotico();
      double getx();
      double gety();
      double getz();
      bool getsujetando();
      void coger();
      void soltar();
      void mover(double x, double y, double z);
};
