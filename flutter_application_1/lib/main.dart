import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    home: HomePage(),
  ));
}

class HomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        backgroundColor: Colors.white,
        title: Center(
          child: Text(
            "ECSTATIC",
            style: TextStyle(
              color: Colors.black,
              fontFamily: 'Rounded Mplus',
              fontSize: 20,
            ),
          ),
        ),
        bottom: PreferredSize(
            child: Row(
              children: <Widget>[
                Expanded(
                  child: Container(
                    height: 2.5,
                    color: Colors.black,
                  ),
                ),
              ],
            ),
            preferredSize: Size.square(1.0)),
      ),
    );
  }
}
